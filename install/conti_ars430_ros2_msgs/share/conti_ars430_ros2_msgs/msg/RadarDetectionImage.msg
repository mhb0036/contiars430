std_msgs/Header header

uint16 detect_type               # far0=1, far1=2, near0=3, near1=4, near2=5
uint64 utc_time                  # ns, some kind of UTC time representation, unsure
uint32 internal_time             # us, some kind of internal time, unsure
uint32 meas_count                # counter of measurement data, unsure
uint32 cycle_count               # internal componenet counter, unsure
uint16 num_avail_detects         # number of available detections, unsure
float64 vel_ambig                # m/s, velocity measurement ambiguity
float32 center_freq              # GHz, radar center frequency
RadarDetection[] detection_list  # list of detections
