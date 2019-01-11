//
//  ATNativeAdCollection.h
//
//  Created by Leadbolt
//  Copyright © 2017 LeadBolt. All rights reserved.
//
#import "AppTracker.h"

@interface ATNativeAdCollection : NSObject

@property (readonly) NSArray *ads;


-(void)setConfig:(NSDictionary *)json withDelegate:(id<ATNativeAdDelegate>)d;

@end
