/**
 * Juster Core Engine
 * Project: BlueBixt Science Library
 * Description: Initializes the Juster environment and main application logic.
 */

import { initializeActivity } from './src_activity.js';

class JusterEngine {
    constructor() {
        this.version = "1.0.0";
        this.status = "Initializing...";
    }

    start() {
        console.log(`Starting Juster v${this.version}...`);
        this.status = "Running";
        
        // Initialize the activity module
        initializeActivity();
        
        console.log("Juster environment is ready.");
    }
}

// Instantiate and start the engine
const juster = new JusterEngine();
juster.start();
