cat file.txt | awk '{if($0~/^[0-9]{3}-[0-9]{3}-[0-9]{4}$/) print $0; if($0~/^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$/) print $0;}'