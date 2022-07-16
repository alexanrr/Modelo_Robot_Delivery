% Create the driving scenario with both the ground truth and estimated
% vehicle poses.
scene = drivingScenario;
groundTruthVehicle = vehicle(scene, 'PlotColor', [0 0.4470 0.7410]);
estVehicle = vehicle(scene, 'PlotColor', [0 0.4470 0.7410]);

% Generate the baseline trajectory.
sampleRate = 100;
wayPoints = [  0   0 0;
             200   0 0;
             200  50 0;
             200 230 0;
             215 245 0;
             260 245 0;
             290 240 0;
             310 258 0;
             290 275 0;
             260 260 0;
             -20 260 0];
t = [0 20 25 44 46 50 54 56 59 63 90].';
speed = 10;
velocities = [ speed     0 0;
               speed     0 0;
                   0 speed 0;
                   0 speed 0;
               speed     0 0;
               speed     0 0;
               speed     0 0;
                   0 speed 0;
              -speed     0 0;
              -speed     0 0;
              -speed     0 0];

traj = waypointTrajectory(wayPoints, 'TimeOfArrival', t, ...
    'Velocities', velocities, 'SampleRate', sampleRate);

% Add a road and buildings to scene and visualize.
helperPopulateScene(scene, groundTruthVehicle);