//
//  ZFDownloadDelegate.h
//

#import <Foundation/Foundation.h>
#import "STMHttpRequest.h"

@protocol STMDownloadDelegate <NSObject>

@optional
- (void)startDownload:(STMHttpRequest *)request;
- (void)updateCellProgress:(STMHttpRequest *)request;
- (void)finishedDownload:(STMHttpRequest *)request;
- (void)allowNextRequest;//处理一个窗口内连续下载多个文件且重复下载的情况

@end
