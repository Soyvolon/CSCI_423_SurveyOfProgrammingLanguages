window.FunctionTester = (() => {
    return {
        testMiddle() {
            let one = parseFloat(prompt("Enter Number 1:"));
            let two = parseFloat(prompt("Enter Number 2:"));
            let three = parseFloat(prompt("Enter Number 3:"));

            let res = middle_finder(one, two, three);
            alert("The found number is: " + res);
        },

        testConsonant() {
            let str = prompt("Enter Character Only String: ");
            let res = consonant_counter(str);
            alert("The number of consonants found is: " + res);
        }
    };
})();

function middle_finder(one, two, three) {
    let low = one;
    let mid = two;
    let high = three;

    while (!(mid >= low && mid <= high)) {
        if (mid < low) {
            let tmp = mid;
            mid = low;
            low = tmp;
        } else if (mid > high) {
            let tmp = mid;
            mid = high;
            high = tmp;
        }
    }

    return  mid;
}

function consonant_counter(str) {
    let lower = str.toLowerCase();

    let counter = 0;
    for (let i = 0; i < lower.length; i++) {
        switch(lower[i]) {
            case "a":
            case "e":
            case "i":
            case "o":
            case "u":
                break;
            default:
                counter += 1;
                break;
        }
    }

    return counter;
}