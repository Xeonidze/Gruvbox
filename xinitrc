#feh --bg-scale $HOME/wp/gruv.png &
~/.fehbg &
picom -b &
slstatus &
export PATH="$PATH:/var/lib/flatpak/exports/bin:$HOME/.local/share/flatpak/exports/bin" &
setxkbmap -layout us,ru -option grp:alt_shift_toggle &
exec dbus-run-session dwm
#while true; do
#    dwm 2> ~/.dwm.log
#done
