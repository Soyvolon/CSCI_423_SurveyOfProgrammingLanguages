window.Tester = (() => {
    return {
        testAnimal() {
            let anim = new Animal("Bob", "Monke", "Brown");
            alert(anim.getDisplay());
        },

        testUSDate() {
            let date = prompt("Input date (MM/DD/YYYY)");
            let res = testUSDate(date);
            alert("Is the date formatted correctly? " + res);
        }
    };
})();

class Animal {
    constructor(name, species, color) {
        this.name = name;
        this.species = species;
        this.color = color;
    }

    getDisplay() {
        return `${this.name} is a ${this.species} and is ${this.color}`;
    }
}

function testUSDate(date) {
    const re = /^((0\d)|(1[0-2]))\/(([0-2]\d)|(3[0-1]))\/\d\d\d\d$/;
    return re.test(date);
}