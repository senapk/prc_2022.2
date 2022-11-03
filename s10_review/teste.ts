

class Pet {
    nome: string;
    vidas: number;
    constructor(nome: string, vidas: number) {
        this.nome = nome;
        this.vidas = vidas;
    }
}

let pets: Array<Pet> = [new Pet("chaninha", 5),
                        new Pet("rex", 1), 
                        new Pet("bela", 3)];

let vivos = pets.filter(elem => elem.vidas > 0)

let pos = pets.findIndex(elem => elem.nome == "rex")
if (pos != -1)
    pets.splice(pos, 1)