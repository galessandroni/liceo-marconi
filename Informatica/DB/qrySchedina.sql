SELECT Giornata, SquadraCasa, SquadraFuoriCasa, PCasa, PFuoriCasa, IIf(PCasa > PFuoriCasa, "1", IIf(PCasa = PFuoriCasa, "X", "2")) AS Schedina
FROM tblPartite
WHERE Giornata = 4;
