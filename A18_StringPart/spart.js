window.SPartTester = (() => {
    return {
        testSPart() {
            let str = prompt("Enter String: ");
            let first = parseInt(prompt("Substring Start: "));
            let last = parseInt(prompt("Substring End: "));

            let res = string_part(str, first, last);
            alert("The Substring Is: " + res);
        }
    };
})();

function string_part(str, first, last) {
    if (first > last) {
        return "";
    }

    let start = first;
    if (start < 0) {
        start = 0;
    }

    let end = last + 1;
    if (end > str.length) {
        end = str.length;
    }

    return str.substring(start, end);
}