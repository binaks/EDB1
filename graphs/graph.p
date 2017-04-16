clear
reset
set key off

set title "Análise Empírica de Algoritmos"

set autoscale

set xlabel "tamanho da base de busca"
set ylabel "média do tempo de execução (em segundos)"

set xtic auto
set ytic 0.0000001

set yrange [0:0.000001]

set terminal png size 800,600 enhanced font "Helvetica 12"
set output "graph.png"

set style textbox transparent margins 1.0, 1.0 border

set key bmargin left horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid

plot "../data/sequencialI.dat" using 1:2 title 'Sequencial Iterativa' with line , \
        "../data/sequencialR.dat" using 1:2 title 'Sequencial Recursiva' with line , \
        "../data/binariaI.dat" using 1:2 title 'Binária Iterativa' with line , \
        "../data/binariaR.dat" using 1:2 title 'Binária Recursiva' with line
