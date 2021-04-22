Invoke-WebRequest -UseBasicParsing "https://raw.githubusercontent.com/khanhas/spicetify-cli/master/install.ps1" | Invoke-Expression

spicetify

spicetify config extensions webnowplaying.js

spicetify config inject_css 0 replace_colors 0

spicetify backup apply