/**
 * LeetCode 290. Word Pattern
 * https://leetcode.com/problems/word-pattern/
 */
 function wordPattern(pattern: string, s: string): boolean {
    // Helper functions
    function append(s: string, startIdx: number, endIdx: number): string {
        let r: string = "";
        for (let i: number = startIdx; i < endIdx; i++) {
            r = r.concat(s.charAt(i));
        }
        return r;
    }
    function split(s: string, c: string): string[] {
        let arr: string[] = [];
        let startIdx: number = 0;
        let n: number = s.length;
        for (let i: number = 0; i < n /* ... */; ) {
            startIdx = i;
            while (i < n && s.charAt(i) !== c) {
                i++;
            }
            arr.push(append(s, startIdx, i));
            i++;
        }
        return arr;
    }
    // Main functions
    let wordList: string[] = split(s, " ");
    if (wordList.length !== pattern.length) {
        return false;
    }
    let cMap: Map<String, Number> = new Map<String, Number>();
    let sMap: Map<String, Number> = new Map<String, Number>();
    let cIdx: number = 0;
    let sIdx: number = 0;
    let n: number = wordList.length;
    for (let i: number = 0; i < n; i++) {
        cIdx =
            cMap.get(pattern.charAt(i)) === undefined
                ? -1
                : cMap.get(pattern.charAt(i)).valueOf();
        sIdx =
            sMap.get(wordList[i]) === undefined
                ? -1
                : sMap.get(wordList[i]).valueOf();
        cMap.set(pattern.charAt(i), i);
        sMap.set(wordList[i], i);
        if (cIdx !== sIdx) {
            return false;
        }
    }
    return true;
}

// EOF
