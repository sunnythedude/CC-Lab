var system;

function setup() {
  var myCanvas = createCanvas(windowWidth, windowHeight + 150);
   myCanvas.parent('wrapper');
   background(255);
   noStroke();
}

function draw() {
   fill(255,13);
   rect(0, 0, windowWidth, windowHeight + 150);
  
   fill(random(0,255),random(0,255),random(0,255), 255);
   ellipse(random(width), random(height),random(5,50));
}


