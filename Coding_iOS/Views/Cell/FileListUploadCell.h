//
//  FileListUploadCell.h
//  Coding_iOS
//
//  Created by Ease on 14/12/24.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileListUploadCell : UITableViewCell
@property (strong, nonatomic) NSString *fileName;
@property (nonatomic,copy) void(^reUploadBlock)(NSString *fileName);
@property (nonatomic,copy) void(^cancelUploadBlock)(NSString *fileName);
@property (nonatomic,copy) void(^doneUploadBlock)();

+ (CGFloat)cellHeight;
@end