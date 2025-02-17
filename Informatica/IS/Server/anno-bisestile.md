# Verifica se un anno è, o meno, bisestile

Un anno è **bisestile** se:

1. è divisibile per 4;
2. non è divisibile 100 a eccezione dei secoli divisibili per 400.

## Codice minimo

Supponendo di aver una variabile `$anno` popolata con l'anno da esaminare, il codice che segue

```php
<?php
if ($anno % 400 == 0 || ($anno % 4 == 0 && $anno % 100 != 0)) {
    echo "Bisestile";
} else {
    echo "Non bisestile";
}
?>
```

risponde con `Bisestile` oppure con `Non bisestile` a seconda del valore della variabile `$anno`.
