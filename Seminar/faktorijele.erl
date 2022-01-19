-module(faktorijele). 
-export([faktorijel/1,start/0]). 

faktorijel(N) when N == 0 -> 1; 
faktorijel(N) when N > 0 -> N*faktorijel(N-1). 

start() -> 
   X = faktorijel(5), 
   io:fwrite("~w ~n",[X]).