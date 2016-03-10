ct=$(stat -f %m bomb.txt)
ct=$((ct-1))
ct=$(date -r "$ct")
echo "$ct"
