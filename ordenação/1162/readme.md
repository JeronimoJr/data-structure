# Autor: Francisco Jerônimo Da Silva Júnior
## Estrada de Juá

Em uma matriz com os caracteres '@', '$', '#', as linhas e as colunas podem ser vistas
como "ruas", '$' representa um salva-vida, '@' representa um pedestre e'#' representa um buraco, caso algum pedestre se dapare na sua frente com algum buraco, ele cairá e consequentemente
morrerá (Os buracos em Juá são bem perigosos), ao menos que exista alguém para lhe salvar, esse alguém já conhece bem as ruas de Juá e te ajudará a escapar do perigo iminente, porém
essa pessoa deverá está em uma posição adjacente ao do buraco.
	- Exemplo:
		```
		@ # $
		  
		  $	
		@ #
 
		@ # 
		  $

		```

Em uma matriz de caracteres de dimensão 5x5 você deverá calcular o número de pedestres
mortos e salvos. Um pedestre é morto quando não há um salva-vida adjacente ao buraco que está
na sua frente, um pedestre é dito como salvo quando ocorre que um salva-vida está em uma posição adjacente ao buraco que está a sua frente.

---

Entrada:
- As linhas e colunas da matriz de dimensão 5x5, os caracteres são restringidos há:
    - $ Representa um salva-vida.
    - @ Representa um pedreste .
    - # Representa um buraco.

Saída
- A quantidade de pedestres que morreram e que foram salvos.

---
## Testes

```
>>>>>>>> Entrada

@ $ @ $ @
@ # @ # $
# @ # @ #
@ # @ # $
@ $ @ @ #
======== Saída
 *1 Pedestre(s) morreu*
 *6 Pedestre(s) foram salvos*
<<<<<<<<

```
