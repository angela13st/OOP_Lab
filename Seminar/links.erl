-module(links).
-export([parent/0, child/0, run/0]).


child() ->
    io:format("Ja sam proces dijete i moj pid je ~p~n", [self()]),
    receive
    after 1000 ->
        io:format("Ja (proces dijete ~p) cu se sada ugasiti!~n", [self()])
    end.


parent() ->

	io:format("Ja sam proces roditelj i moj pid je ~p~n", [self()]),
    Pid = spawn(links, child, []),
    link(Pid),
    
    io:format("Ja (proces roditelj) imam proces dijete sa pid-om ~p~n", [Pid]),
	process_flag(trap_exit, true),
    receive
        {'EXIT', Pid, Reason} ->
            timer:sleep(10),
            io:format("Ja proces roditelj imam ugasen proces dijete s pid-om ~p. Razlog gasenja: ~p~n", [Pid, Reason]),
            io:format("i ja proces roditelj cu se sada ugasiti. ~n")
    end.

run() ->
    spawn(links, parent, []).
    
