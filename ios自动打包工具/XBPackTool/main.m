//
//  main.m
//  XBPackTool
//
//  Created by Bingo on 22/5/17.
//  Copyright © 2022年 Bingo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XBXcodeBuild.h"




int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        //打包程序
        [XBXcodeBuild xcodeBuildProjectSetBuildType:[XBXcodeBuild xcodeBuildType:XcodeBuildType_Debug]];
        
        
    }
    return 0;
}
























