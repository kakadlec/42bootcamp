#!/bin/sh

# Validar, compilar e executar
echo "********** INICIANDO VALIDAÇÃO **********" 
echo 
echo "PROGRAMA: " $1 $2
echo 
echo "1 VALIDANDO NORMINETTE"

/etc/norminette-client/norminette.rb -R CheckForbiddenSourceHeader "$2" | cat

echo "2 COMPILANDO"

gcc -Wall -Wextra -Werror "$1" "$2" | cat

echo "3 EXECUTANDO"

echo "4 RESULTADO: "
./a.out | cat -e
echo