//
//  STMHttpRequest.h
//

#import <Foundation/Foundation.h>
#import <ASIHTTPRequest/ASIHTTPRequest.h>

@class STMHttpRequest;

@protocol STMHttpRequestDelegate <NSObject>

- (void)requestFailed:(STMHttpRequest *)request;
- (void)requestStarted:(STMHttpRequest *)request;
- (void)request:(STMHttpRequest *)request didReceiveResponseHeaders:(NSDictionary *)responseHeaders;
- (void)request:(STMHttpRequest *)request didReceiveBytes:(long long)bytes;
- (void)requestFinished:(STMHttpRequest *)request;
@optional
- (void)request:(STMHttpRequest *)request willRedirectToURL:(NSURL *)newURL;

@end

@interface STMHttpRequest : NSObject
@property (weak, nonatomic) id<STMHttpRequestDelegate> delegate;
@property (strong, nonatomic) NSURL                  *url;
@property (strong, nonatomic) NSURL                  *originalURL;
@property (strong, nonatomic) NSDictionary           *userInfo;
@property (assign, nonatomic) NSInteger              tag;
@property (copy, nonatomic) NSString                 *downloadDestinationPath;
@property (copy, nonatomic) NSString                 *temporaryFileDownloadPath;
@property (strong,readonly,nonatomic) NSError *error;

- (instancetype)initWithURL:(NSURL*)url;
- (void)startAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)cancel;
@end
