const testAddon = require('./build/Release/testaddon.node');
console.log('addon:',testAddon.hello());
module.exports = testAddon;