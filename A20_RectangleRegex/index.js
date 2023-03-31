window.Regex = (() =>
{
    return {
        checkString(word) {
            let expr = /a(.*[^a])*b(.*[^a-b])*c.*/;
            return expr.test(word);
        },

        promptABC() {
            let input = prompt("Enter a string:");
            if (this.checkString(input)) {
                alert("String contains A, B, and C.");
            } else {
                alert("String does not contain A, B, and C.")
            }
        },

        testABC() {
            let data = [
                {test: "abc", res: true},
                {test: "danmhblkoc", res: true},
                {test: "aabbc", res: true},
                {test: "adagbkbiuc ", res: true},
                {test: "abca", res: true},
                {test: "dgk", res: false},
                {test: "dakl", res: false},
                {test: "cba", res: false},
                {test: "abac", res: false}
            ]

            this.testRunner(data, this.checkString);
            alert("Output printed to console.");
        },

        testRunner(testData, method) {
            console.log(`Running tests on ${method.name}`);
            testData.forEach(set => {
                let testRes = method(set.test);
                if (testRes == set.res) {
                    console.log(`Test Succeeded: {${set.test}, ${set.res}}`);
                } else {
                    console.log(`Test Failed: Test: ${set.test} | Expected: ${set.res} | Actual: ${testRes}`);
                }
            });
        }
    };
})();

window.Rectangle = (() => {
    return {
        testRect() {
            let len = parseFloat(prompt("Enter Length"));
            let width = parseFloat(prompt("Enter Width"));

            let rect = new rectangle(len, width);
            alert(rect.getArea());
        }
    };
})();

function getArea() {
    return this.length * this.width;
}

function rectangle(len, width) {
    this.length = len;
    this.width = width;
    this.getArea = getArea;
}
