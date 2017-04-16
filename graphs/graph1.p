clear
reset
set key off

set title "Busca Sequencial Iterativa"

set autoscale

set xlabel "tamanho da base de busca"
set ylabel "média do tempo de execução (em segundos)"

set xtic auto
set ytic auto

set terminal png size 640,480 enhanced font "Helvetica 12"
set output "graph1.png"

set style textbox transparent margins 1.0, 1.0 border

plot "../data/sequencialI.dat" using 1:2 title 'Beam' with line
