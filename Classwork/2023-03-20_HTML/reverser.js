window.Reverser = (() => {
    return {
        reverser(number) {
            var numParts = number.split("");
            var output = numParts.reverse().join('');
            return output;
        },

        prompt() {
            var num = prompt("Enter a number: ");
            // var numReversed = this.reverser(num);
            var numReversed = reverser(parseInt(num));
            alert("The output is: " + numReversed);
        }
    }
})();

function reverser(number) {
    var numParts = String(number).split("");
    var output = numParts.reverse().join('');
    return parseInt(output);
}

// parseInt(String(12345).split("").reverse().join(""));