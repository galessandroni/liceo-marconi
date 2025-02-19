# Alcune funzioni predefinite

Nel linguaggio PhP non è necessario definire il tipo di variabili. Tuttavia, quando si ricevono dati, è interessante
controllare se sono come ci si aspetta.

Per questa ragione, in PhP sono presenti alcune funzioni predefinite che svolgono questi compiti e che è molto importante
conoscere bene.

```php
isset($variabile)     // controlla se una variabile esiste, restituisce true o false
empty($variabile)     // controllare se una variabile è vuota, restituisce true o false
strlen($variabile)    // restituisce il numero di caratteri contenuti nella variabile
is_int($variabile)    // controlla se il contenuto della variabile è di tipo intero
```

Con l'utilizzo di queste funzioni, se è sono stati alterati i parametri dei un metodo GET (a titolo di esempio) il programma
continuerà a funzionare, per via dei controlli preventivi. Senza questi controlli si avrebbe un codice di errore.
