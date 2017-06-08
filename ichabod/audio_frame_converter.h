//
//  audio_frame_converter.h
//  ichabod
//
//  Created by Charley Robinson on 6/8/17.
//

#ifndef audio_frame_converter_h
#define audio_frame_converter_h

#include <libavutil/frame.h>

/**
 * Sample queue converts frames to a requested size
 */
struct frame_converter_s;

struct frame_converter_config_s {
  enum AVSampleFormat output_format;
  int samples_per_frame;
  int num_channels;
  int sample_rate;
};

void frame_converter_create(struct frame_converter_s** converter_out,
                            struct frame_converter_config_s* config);
void frame_converter_free(struct frame_converter_s* converter);

int frame_converter_consume(struct frame_converter_s* converter,
                            AVFrame* frame);
int frame_converter_get_next(struct frame_converter_s* converter,
                             AVFrame** frame_out);



#endif /* audio_frame_converter_h */