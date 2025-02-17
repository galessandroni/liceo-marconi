<?php
// Il file deve essere richiamato così:
// anno-bisestile.php?anno=1234
$anno = $_GET['anno']

if ($anno % 400 == 0 || ($anno % 4 == 0 && $anno % 100 != 0)) {
    echo "Bisestile";
} else {
    echo "Non bisestile";
}
?>
