//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  RHWeChatDylib.h
//  RHWeChatDylib
//
//  Created by hmy2015 on 2017/8/29.
//  Copyright (c) 2017年 何米颖大天才. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CMessageMgr

- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2;

@end

@interface SKBuiltinBuffer_t

@property(retain, nonatomic) NSData *buffer; // @dynamic buffer

@end

@interface WCRedEnvelopesLogicMgr

- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;

@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;

@end