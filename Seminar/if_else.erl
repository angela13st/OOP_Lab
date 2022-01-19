-module (if_else).
-export([run/0]).




compare(X, Y) ->
    if
        X > Y ->  io:format("~p is greater than ~p ~n", [X, Y]);
        X == Y ->  io:format("~p is eaqual ~p ~n", [X, Y]);
        X < Y ->  io:format("~p is less than ~p ~n", [X, Y])
    end.
   





ascii(Letter) ->
    Code = if
        Letter =:= "A" -> 101;
        Letter =:= "B" -> 102;
        true -> unknown
    end,
    io:format("~p = ~p~n", [Letter, Code]).
	
run() ->
    compare(20,4),
    ascii("D").