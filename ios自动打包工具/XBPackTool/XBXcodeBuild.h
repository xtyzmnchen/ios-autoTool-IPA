//
//  XBXcodeBuild.h
//  XBPackTool
//
//  Created by Bingo on 22/5/17.
//  Copyright © 2022年 Bingo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum{
    XcodeBuildType_Debug,
    XcodeBuildType_Release
}XcodeBuildType;

@class XBProjectEntity;
@interface XBXcodeBuild : NSObject
+ (NSString *)xcodeBuildType:(XcodeBuildType)type;
+ (void)xcodeBuildProjectSetBuildType:(NSString*)buildType;
@end
