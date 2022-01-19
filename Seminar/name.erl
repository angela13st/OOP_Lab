-module(name).

-export([print_name/1]).

print_name([ZadnjeSlovo | []]) ->
  io:format("~c~n", [ZadnjeSlovo]);
print_name([PrvoSlovo | OstatakRijeci]) ->
  io:format("~c~n", [PrvoSlovo]),
  print_name(OstatakRijeci).