// ES6
export default function add(a, b) {
    return a + b;
} 

export function sub(a, b) {
    return a - b;
}

// Have to create a package.json
// If package.json exists, require() does not work
// Avoid import-export?