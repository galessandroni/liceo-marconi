SELECT Giornata, SquadraCasa, SquadraFuoriCasa, PCasa, PFuoriCasa, IIf([PCasa] - [PFuoriCasa] > 0, "1", IIf([PCasa] - [PFuoriCasa] = 0, "X", "2")) AS Schedina
FROM tblPartite
WHERE Giornata = 4;
