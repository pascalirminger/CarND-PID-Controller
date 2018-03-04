# PID Controller Project

# [Rubric](https://review.udacity.com/#!/rubrics/824/view) points

## Compilation

### Your code should compile.

The code compiles without errors or warnings using the following command line:

    cmake .. && make

## Implementation

### The PID procedure follows what was taught in the lessons.

The PID implementation can be found in the source file [PID.cpp](./src/PID.cpp):
* The [```PID::Init()```](./src/PID.cpp#L13) method initializes the coefficients and the errors.
* The [```PID::UpdateError()```](./src/PID.cpp#L25) method updates the proportional, integral and differential error.
* The [```PID::TotalError()```](./src/PID.cpp#L34) method calculates the total PID error using the corresponding coefficients.

## Reflection

### Describe the effect each of the P, I, D components had in your implementation.

* **Proportionnal component (P)**
  
  The proportional component of the controller tries to steer the car toward the center line (against the cross-track error). If used along, the car overshoots the central line very easily and go out of the road very quickly. Here is an example video with only the P component in use: [p_only.mov](./videos/p_only.mov).

* **Integral component (I)**
  
  The integral component tries to eliminate a possible bias on the controlled system that could prevent the error to be eliminated. If used along, it makes the car to go in circles. An example video with only the I component in use can be found [here](https://youtu.be/hQj1hndU4Qo).

* **Differential component (D)**
  
  The differential component helps to counteract the proportional trend to overshoot the center line by smoothing the approach to it. An example video with only the D component in use can be found [here](https://youtu.be/_IX_g0mKwa0).

### Describe how the final hyperparameters were chosen.

The hyperparameters were chosen manually by try and error.

## Simulation

### The vehicle must successfully drive a lap around the track.

A short video with the final parameters can be found [here](https://youtu.be/883OYHb76vw).
