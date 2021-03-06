//
//  ichabod.h
//  ichabod
//
//  Created by Charley Robinson on 6/15/17.
//

#ifndef ichabod_h
#define ichabod_h

/**
 * Entry point for building archives with this project.
 */

struct ichabod_s;
struct ichabod_config_s {
  const char* output_path;
};

void ichabod_initialize();
void ichabod_alloc(struct ichabod_s** ichabod_out);
void ichabod_free(struct ichabod_s* ichabod);
void ichabod_load_config(struct ichabod_s* ichabod,
                         struct ichabod_config_s* config);

int ichabod_start(struct ichabod_s* ichabod);
void ichabod_interrupt(struct ichabod_s* ichabod);
char ichabod_is_running(struct ichabod_s* ichabod);

#endif /* ichabod_h */
