clear
reset
set key off

set title "Busca Sequencial Recursiva"

set autoscale

set xlabel "tamanho da base de busca"
set ylabel "média do tempo de execução (em ms)"

set xtic auto
set ytic auto

set terminal png size 640,480 enhanced font "Helvetica 12"
set output "graph2.png"

set style textbox transparent margins 1.0, 1.0 border

plot "sequencialR.dat" using 1:2 title 'Beam' with line
