//
//  XBProjectPath.h
//  XBPackTool
//
//  Created by Bingo on 22/5/17.
//  Copyright © 2022年 Bingo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBProjectPath : NSObject
+ (instancetype)sharePProjectPath;

//获取项目路径
- (NSString*)projectPath;

//获取IPA路径
- (NSString*)projectIPAPath;

//获取build路径
- (NSString*)projectXcodeBuildPath:(NSString*)type;

//删除DerivedData文件夹下所有文件
+ (void)deleteDerivedDataSubFolder;


@end
