cat $1 | awk '$1=="nicolas" && $2=="Bomber" {print}' | cut  -f3
