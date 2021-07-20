/**
 * LeetCode 150. Evaluate Reverse Polish Notation
 * https://leetcode.com/problems/evaluate-reverse-polish-notation/
 */
function evalRPN(tokens: string[]): number {
    let opSet: Set<string> = new Set<string>();
    opSet.add("+");
    opSet.add("-");
    opSet.add("*");
    opSet.add("/");
    let s: Array<number> = new Array<number>();
    for (let i: number = 0; i < tokens.length; i++ ) {
        if (opSet.has(tokens[i])) { // Operator
            let a: number = s.pop();
            let b: number = s.pop();
            switch (tokens[i]) {
            case "+":
                s.push(b + a);
                break;
            case "-":
                s.push(b - a);
                break;
            case "*":
                s.push(b * a);
                break;
            case "/":
                s.push((b / a) | 0);
                break;
            default:
                break;
            }
        } else { // Number
            s.push(parseInt(tokens[i]));
        }
    }
    return s[s.length - 1];
};

// EOF
