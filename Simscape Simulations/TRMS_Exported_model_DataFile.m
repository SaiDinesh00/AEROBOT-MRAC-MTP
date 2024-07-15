% Simscape(TM) Multibody(TM) version: 23.2

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(21).translation = [0.0 0.0 0.0];
smiData.RigidTransform(21).angle = 0.0;
smiData.RigidTransform(21).axis = [0.0 0.0 0.0];
smiData.RigidTransform(21).ID = "";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [0 0 0];  % mm
smiData.RigidTransform(1).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(1).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(1).ID = "B[support_beam-1:-:support_plate-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [0 0 0];  % mm
smiData.RigidTransform(2).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(2).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(2).ID = "F[support_beam-1:-:support_plate-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [0 400 0];  % mm
smiData.RigidTransform(3).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(3).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(3).ID = "B[support_beam-1:-:BOTTOM_HINGE_V3-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [2.6328330249079537e-14 9.999999999999968 -1.0705727123447504e-14];  % mm
smiData.RigidTransform(4).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(4).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(4).ID = "F[support_beam-1:-:BOTTOM_HINGE_V3-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [0 22 0];  % mm
smiData.RigidTransform(5).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(5).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(5).ID = "B[BLDC_Motor_5010-1:-:Propeller 10x45.step-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [9.8681063320782414e-12 1.9999999999994844 1.6718848527830232e-12];  % mm
smiData.RigidTransform(6).angle = 2.094395102393197;  % rad
smiData.RigidTransform(6).axis = [-0.5773502691896264 -0.57735026918962506 -0.57735026918962584];
smiData.RigidTransform(6).ID = "F[BLDC_Motor_5010-1:-:Propeller 10x45.step-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [-12.500000000000007 610 -6.0500000000000274];  % mm
smiData.RigidTransform(7).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(7).axis = [-0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(7).ID = "B[beam-1:-:BLDC_Motor_5010-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [-6.0500000000043546 -3.6841640849161195e-12 -12.999999999984274];  % mm
smiData.RigidTransform(8).angle = 2.0943951023932099;  % rad
smiData.RigidTransform(8).axis = [-0.57735026918961574 0.57735026918963062 0.57735026918963095];
smiData.RigidTransform(8).ID = "F[beam-1:-:BLDC_Motor_5010-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [0 21.999999999999993 0];  % mm
smiData.RigidTransform(9).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(9).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(9).ID = "B[BLDC_Motor_5010-2:-:Propeller 10x45.step-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(10).translation = [1.2338352561869215e-11 1.9999999999948577 2.2377655284344655e-12];  % mm
smiData.RigidTransform(10).angle = 2.0943951023931975;  % rad
smiData.RigidTransform(10).axis = [-0.5773502691896264 -0.5773502691896254 -0.57735026918962551];
smiData.RigidTransform(10).ID = "F[BLDC_Motor_5010-2:-:Propeller 10x45.step-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(11).translation = [0 4.0000000000000036 6.0499999999999998];  % mm
smiData.RigidTransform(11).angle = 0;  % rad
smiData.RigidTransform(11).axis = [0 0 0];
smiData.RigidTransform(11).ID = "B[beam-1:-:BLDC_Motor_5010-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(12).translation = [-7.1409544943890069e-13 -1.8829382497642655e-13 7.999999999999627];  % mm
smiData.RigidTransform(12).angle = 1.5707963267948932;  % rad
smiData.RigidTransform(12).axis = [-1 -1.8448586389534386e-14 -1.8487838701001481e-14];
smiData.RigidTransform(12).ID = "F[beam-1:-:BLDC_Motor_5010-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(13).translation = [0 71.499999999999986 0];  % mm
smiData.RigidTransform(13).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(13).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(13).ID = "B[box_upper_Default_sldprt.step-1:-:box_top_plate_Default_sldprt.step-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(14).translation = [3.0116381113196638e-12 -7.0852749157131126e-13 -1.9888799975195813e-13];  % mm
smiData.RigidTransform(14).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(14).axis = [-0.57735026918962551 0.57735026918962573 0.57735026918962595];
smiData.RigidTransform(14).ID = "F[box_upper_Default_sldprt.step-1:-:box_top_plate_Default_sldprt.step-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(15).translation = [12.500000000000025 610 -6.0499999999999723];  % mm
smiData.RigidTransform(15).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(15).axis = [0.57735026918962584 0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(15).ID = "B[beam-1:-:box_upper_Default_sldprt.step-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(16).translation = [-39.999999999994976 41.799999999998796 79.749999999993804];  % mm
smiData.RigidTransform(16).angle = 3.1415926535897918;  % rad
smiData.RigidTransform(16).axis = [-0.70710678118654757 6.106226635438361e-16 -0.70710678118654757];
smiData.RigidTransform(16).ID = "F[beam-1:-:box_upper_Default_sldprt.step-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(17).translation = [12.500000000000025 610 -6.0499999999999723];  % mm
smiData.RigidTransform(17).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(17).axis = [0.57735026918962584 0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(17).ID = "B[beam-1:-:TOP_HINGE_V3-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(18).translation = [-305.00000000000114 24.999999999992227 6.0999999999999943];  % mm
smiData.RigidTransform(18).angle = 3.1415926535897882;  % rad
smiData.RigidTransform(18).axis = [-2.3869795029440866e-15 0.70710678118654746 -0.70710678118654768];
smiData.RigidTransform(18).ID = "F[beam-1:-:TOP_HINGE_V3-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(19).translation = [15 58.700000000000017 0];  % mm
smiData.RigidTransform(19).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(19).axis = [0.57735026918962584 0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(19).ID = "B[BOTTOM_HINGE_V3-1:-:TOP_HINGE_V3-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(20).translation = [3.943512183468556e-13 39.499999999999417 -14.999999999999659];  % mm
smiData.RigidTransform(20).angle = 3.1415926535897927;  % rad
smiData.RigidTransform(20).axis = [-0.81348743904593568 -0.58158248470400586 1.1102230246251567e-15];
smiData.RigidTransform(20).ID = "F[BOTTOM_HINGE_V3-1:-:TOP_HINGE_V3-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(21).translation = [213.17236859755667 -377.72699461856575 156.2823654957395];  % mm
smiData.RigidTransform(21).angle = 0;  % rad
smiData.RigidTransform(21).axis = [0 0 0];
smiData.RigidTransform(21).ID = "RootGround[support_plate-1]";


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(9).mass = 0.0;
smiData.Solid(9).CoM = [0.0 0.0 0.0];
smiData.Solid(9).MoI = [0.0 0.0 0.0];
smiData.Solid(9).PoI = [0.0 0.0 0.0];
smiData.Solid(9).color = [0.0 0.0 0.0];
smiData.Solid(9).opacity = 0.0;
smiData.Solid(9).ID = "";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.12728474722715119;  % kg
smiData.Solid(1).CoM = [0 4.9962230777018242 0];  % mm
smiData.Solid(1).MoI = [269.89827236459206 336.44458785038938 68.664802326113545];  % kg*mm^2
smiData.Solid(1).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(1).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = "box_top_plate_Default_sldprt.step*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.062949265273229582;  % kg
smiData.Solid(2).CoM = [0 304.93831901161144 0];  % mm
smiData.Solid(2).MoI = [1948.3408077632869 6.3757699761467075 1951.9862477437944];  % kg*mm^2
smiData.Solid(2).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(2).color = [0.89411764705882346 0.9137254901960784 0.92941176470588238];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "beam*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.60907627571472123;  % kg
smiData.Solid(3).CoM = [0 10 0];  % mm
smiData.Solid(3).MoI = [1589.6256341700353 3138.6461832924224 1589.6256341700357];  % kg*mm^2
smiData.Solid(3).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "support_plate*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.38484510006474976;  % kg
smiData.Solid(4).CoM = [0 200 0];  % mm
smiData.Solid(4).MoI = [5160.7327038370349 58.929405947414828 5160.7327038370349];  % kg*mm^2
smiData.Solid(4).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(4).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = "support_beam*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 0;  % kg
smiData.Solid(5).CoM = [0 0 0];  % mm
smiData.Solid(5).MoI = [0 0 0];  % kg*mm^2
smiData.Solid(5).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(5).color = [0.77647058823529413 0.75686274509803919 0.73725490196078436];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = "BLDC_Motor_5010*:*Varsayilan";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(6).mass = 0.010205879175682961;  % kg
smiData.Solid(6).CoM = [0.00044155716715778769 0.52835703367403875 -0.0045197807915190926];  % mm
smiData.Solid(6).MoI = [33.809457587056158 34.008903006223548 0.28335118641999685];  % kg*mm^2
smiData.Solid(6).PoI = [-7.9947484429294271e-05 -0.43191694698722849 -7.5413931590334406e-06];  % kg*mm^2
smiData.Solid(6).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(6).opacity = 1;
smiData.Solid(6).ID = "Propeller 10x45.step*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(7).mass = 0.014354878428557611;  % kg
smiData.Solid(7).CoM = [0 24.557203304860234 0];  % mm
smiData.Solid(7).MoI = [4.072193061234672 1.9882465009004044 4.0973335861771982];  % kg*mm^2
smiData.Solid(7).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(7).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(7).opacity = 1;
smiData.Solid(7).ID = "TOP_HINGE_V3*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(8).mass = 0.040603322560636798;  % kg
smiData.Solid(8).CoM = [-4.1369681839477792e-05 23.993150594030983 4.508025065175382e-06];  % mm
smiData.Solid(8).MoI = [18.108366364970813 16.739561071739981 25.274357069885561];  % kg*mm^2
smiData.Solid(8).PoI = [-1.7188809805855689e-05 -8.7748071936014217e-06 5.0819822234192112e-05];  % kg*mm^2
smiData.Solid(8).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(8).opacity = 1;
smiData.Solid(8).ID = "BOTTOM_HINGE_V3*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(9).mass = 0.15653194201767909;  % kg
smiData.Solid(9).CoM = [0 29.095797236447961 0];  % mm
smiData.Solid(9).MoI = [591.76594529494275 663.25091725620632 236.38908367769452];  % kg*mm^2
smiData.Solid(9).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(9).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(9).opacity = 1;
smiData.Solid(9).ID = "box_upper_Default_sldprt.step*:*Default";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(4).Rz.Pos = 0.0;
smiData.RevoluteJoint(4).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = 0;  % deg
smiData.RevoluteJoint(1).ID = "[support_beam-1:-:support_plate-1]";

smiData.RevoluteJoint(2).Rz.Pos = 67.872168168465819;  % deg
smiData.RevoluteJoint(2).ID = "[support_beam-1:-:BOTTOM_HINGE_V3-1]";

smiData.RevoluteJoint(3).Rz.Pos = 135.25537216768598;  % deg
smiData.RevoluteJoint(3).ID = "[BLDC_Motor_5010-1:-:Propeller 10x45.step-1]";

smiData.RevoluteJoint(4).Rz.Pos = -7.7533745531762595;  % deg
smiData.RevoluteJoint(4).ID = "[BLDC_Motor_5010-2:-:Propeller 10x45.step-2]";

