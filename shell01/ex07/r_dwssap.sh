cat /etc/passwd | awk "NR%2==0" | grep -v "\#" | cut -d : -f 1 | rev | sort -r | awk "(NR>=$FT_LINE1) && (NR<=$FT_LINE2)" | sed -e 's/$/, /g' | sed -e '$s/, /./' | tr -d '\n'
