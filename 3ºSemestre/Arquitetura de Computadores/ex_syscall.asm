####################################################################
#
# ex_syscall.asm
# 
# Autor: Cesar A. Zeferino
#
####################################################################
# EXEMPLOS DE USO DAS CHAMADAS DE SISTEMA NO PCSpim
# 
# No uso das chamadas de sistema deve-se utilizar $v0 para indicar 
# o c�digo da chamada (servi�o a ser realizado), $a0-$a3 para passar 
# os argumentos do servi�o, e $v0 novamente para obter um valor
# de retorno, em chamadas que retornam algum valor.
#
# Chamadas de sistema que lidam com n�meros expressos em ponto 
# flutuante utilizam $fp12 (argumento) e $f0 (retorno)
#
# Abaixo � apresentado um resumo das chamadas de sistemas. Mais 
# informa��es, incluindo os argumentos e o valor retornado em
# cada chamada  podem ser encontradas no Ap�ndice A do livro 
# Organiza��o e Projeto de Computadores (se��o SPIM, subse��o 
# Chamadas de Sistema) de Patterson e Hennesy.
 
# C�digo   : Chamada
# $v0 =  1 : print_int 
# $v0 =  2 : print_float
# $v0 =  3 : print_double
# $v0 =  4 : print_string
# $v0 =  5 : read_int
# $v0 =  6 : read_float
# $v0 =  7 : read_double
# $v0 =  8 : read_string
# $v0 =  9 : sbkr
# $v0 = 10 : exit

# Para realizar uma chamada de sistema, ap�s carregar o c�digo
# da chamada e seus argumentos, deve-se executar o comando syscall

# NOTAS:
#
# Nota 1: 
# Para carregar valores imediatos em registradores, o exemplo
# utiliza a pseudo instru��o "li reg, imed", que � traduzida para
# "ori reg, $zero, imed" pelo montador.
#
# Nota 2:
# Ao visualizar o conte�do do segmentos de dados, considere
# que cada quatro caracteres da string (incluindo espa�os e novas
# linhas) s�o aramzenados em uma �nica palavra de dados. Al�m disso
# o vallor visualizado na janela Data Segment cooresponde ao c�digo
# ASCII de cada caracter (n�o ao caracter em si).
#
# Nota 3:
# Ao carregar o programa, para disparar a sua execu��o, pressione
# a tecla F5 (GO). Na caixa de di�logo Run Parameters, clique em
# OK. Um console de interface dever� ser apresentado para a 
# realiza��o da entrada-e-sa�da de dados
#
####################################################################

   .data   # segmento de dados

newline:  .asciiz "\n"
Msg1:     .asciiz "\n\n Entre com um n�mero: "
Msg2:     .asciiz "\n O n�mero �: "
Msg3:     .asciiz "\n\n Pressione qualquer tecla "
Msg4:     .asciiz "\n\n Entre com uma string: "
Msg5:     .asciiz "\n A string �: "
buffer:   .asciiz ""


    .text   # segmento de c�digo

main:

# EXEMPLO 1 - Solicita��o e leitura de no. inteiro

      # PRINT_STRING
      li  $v0, 4                # chamada 4
      la  $a0, Msg1             # Msg1
      syscall                    

      # READ_INT
      li  $v0, 5                # chamada 5 
      syscall                    
      add $s0, $v0, $0          # salva $v0 em $s0


# EXEMPLO 2 - impress�o do n�mero lido (armazenado em $s0)

      # PRINT_STRING 
      li  $v0, 4                # chamada 4
      la  $a0, Msg2             # Msg2
      syscall                    

      # PRINT_INT
      li  $v0, 1                # chamada 1
      add $a0, $0, $s0		# $s0 = numero lido
      syscall                    


# EXEMPLO 3 - Solicita��o e leitura de string

      # PRINT_STRING
      li  $v0, 4                # chamada 4
      la  $a0, Msg4             # Msg4
      syscall                    

      # READ_STRING
      li  $v0, 8                # chamada 8
      la  $a0, buffer           # $a0 = endere�o do buffer de leitura
      li  $a1, 16               # $a1 = tamanho maximo do buffer de leitura
      syscall                    


# EXEMPLO 4 - impressao de string lida

      # PRINT_STRING
      li   $v0, 4               # chamada 4
      la   $a0, Msg5            # Msg4
      syscall                    

      # PRINT_STRING
      li   $v0, 4               # chamada 4
      la   $a0, buffer          # $a0 = endere�o do buffer de leitura
      syscall                    


# EXEMPLO FINAL (getch = print_string + read_int)
 
      # PRINT_STRING (press...)
      li   $v0, 4               # chamada 4
      la   $a0, Msg3            # Msg1
      syscall                    

      # READ_INT
      li   $v0, 5               # chamada 5
      syscall                    



# FINALIZANDO O PROGRAMA
      # EXIT
      li $v0, 10                # chamada 10
      syscall                    

