window.Regex = (() => {
    return {
        parsePhone(phone) {
            let expr = /^\(\d{3}\) \d{3}-\d{4}$/;
            return expr.test(phone);
        },

        replaceNumbers(str) {
            let expr = /\b\d+/g;
            return str.replace(expr, "number");
        },

        promptPhone() {
            let input = prompt("Enter a phone number:");
            if (this.parsePhone(input)) {
                alert("Phone format correct");
            } else {
                alert("Phone format bad.")
            }
        },

        promptNumbers() {
            let input = prompt("Enter a string:");
            let res = this.replaceNumbers(input);
            alert(res);
        },

        testPhone() {
            let data = [
                {test: "(984) 202-1009", res: true},
                {test: "984 202 1009", res: false},
                {test: "984-202-1009", res: false},
                {test: "something (984) 202-1009", res: false},
                {test: "(984) 202-1009 something", res: false}
            ]

            this.testRunner(data, this.parsePhone);
            alert("Output printed to console.");
        },

        testNumbers() {
            let data = [
                {test: "9", res: "number"},
                {test: "Some1 said 8 times", res: "Some1 said number times"},
                {test: "7 ate 9", res: "number ate number"},
                {test: "bob1 rekt bob9 3 or 4 times.", res: "bob1 rekt bob9 number or number times."},
                {test: "some one (1) said so.", res: "some one (number) said so."}
            ]

            this.testRunner(data, this.replaceNumbers);
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