// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-
#import <Cocoa/Cocoa.h>
#import "KeyCode.h"

@interface WorkSpaceData : NSObject {
  IBOutlet KeyCode* keycode_;
}

- (unsigned int) getApplicationType:(NSString*)name;

@end