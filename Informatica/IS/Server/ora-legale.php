<!DOCTYPE html>
<html>
<body>

<?php
// Imposta il fuso orario per l'Italia
date_default_timezone_set('Europe/Rome');

// Crea un oggetto DateTime per la data e l'ora attuale
$now = new DateTime();

// Ottiene l'offset attuale in secondi
$offset = $now->getOffset();

// Verifica se l'offset è di 2 ore (ora legale) o 1 ora (ora solare)
if ($offset == 7200) {
    echo "Siamo in ora legale (CEST).";
} elseif ($offset == 3600) {
    echo "Siamo in ora solare (CET).";
} else {
    echo "L'ora non è né legale, né solare.";
}
?>

</body>
</html>
