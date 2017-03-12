&SUBSYS
  &CELL
    PERIODIC XYZ
    ABC 15. 15. 15. 
  &END CELL
  &TOPOLOGY
    COORD_FILE_FORMAT XYZ
    COORD_FILE_NAME water.xyz
    &CENTER_COORDINATES OFF
    &END CENTER_COORDINATES
  &END TOPOLOGY
  &KIND O
    BASIS_SET SZV-MOLOPT-SR-GTH
    POTENTIAL GTH-PBE-q6
  &END KIND
  &KIND H
    BASIS_SET SZV-MOLOPT-SR-GTH
    POTENTIAL GTH-PBE-q1
  &END KIND
&END SUBSYS