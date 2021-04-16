#!/bin/sh

# Validar, compilar e executar
echo "********** INICIANDO VALIDAÇÃO **********" 
echo 
echo "PROGRAMAS: " $1 $2
echo 
echo "1: VALIDANDO NORMINETTE"

/etc/norminette-client/norminette.rb -R CheckForbiddenSourceHeader "$2" | cat

echo "2: COMPILANDO"

gcc -Wall -Wextra -Werror "$1" "$2" | cat

echo "3: RESULTADO: "
echo
./a.out | cat -e
echo
echo "4: APAGANDO a.out"
find a.out -delete 2> ~/SCRIPTS/log