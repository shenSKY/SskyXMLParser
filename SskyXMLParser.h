//
//  SskyXMLParser.h
//  HttpRequest
//
//  Created by 沈凯 on 2017/7/14.
//  Copyright © 2017年 Ssky. All rights reserved.
//

#import <Foundation/Foundation.h>

enum {
    SskyXMLParserOptionsProcessNamespaces           = 1 << 0, // 指定接收器呈现命名空间和指定的标签名称
    SskyXMLParserOptionsReportNamespacePrefixes     = 1 << 1, // 指定接收器呈现命名空间的范围
    SskyXMLParserOptionsResolveExternalEntities     = 1 << 2, // 指定接收器呈现外部实体的声明
};

typedef NSUInteger SskyXMLParserOptions;

@interface SskyXMLParser : NSObject

/**
 NSData格式的XML转换成字典
 @param data NSData格式的XML
 @param error 错误码
 @return 字典
 */
+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError *)error;

/**
 NSString格式的XML转换成字典
 @param string NSString格式的XML
 @param error 错误码
 @return 字典
 */
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError *)error;

/**
 NSData格式的XML按照指定的形式转换成字典
 @param data NSData格式的XML
 @param options 指定的形式
 @param error 错误码
 @return 字典
 */
+ (NSDictionary *)dictionaryForXMLData:(NSData *)data options:(SskyXMLParserOptions)options error:(NSError *)error;

/**
 NSString格式的XML按照指定的形式转换成字典
 @param string NSString格式的XML
 @param options 指定的形式
 @param error 错误码
 @return 字典
 */
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string options:(SskyXMLParserOptions)options error:(NSError *)error;
/**
 NSData格式的XML转换成JSON字符串
 @param data NSData格式的XML
 @param error 错误码
 @return JSON字符串
 */

+ (NSString *)jsonStringForXMLData:(NSData *)data error:(NSError *)error;

/**
 NSString格式的XML转换成JSON字符串
 @param string NSString格式的XML
 @param error 错误码
 @return JSON字符串
 */
+ (NSString *)jsonStringForXMLString:(NSString *)string error:(NSError *)error;

/**
 NSData格式的XML按照指定的形式转换成JSON字符串
 @param data NSData格式的XML
 @param options 指定的形式
 @param error 错误码
 @return JSON字符串
 */
+ (NSString *)jsonStringForXMLData:(NSData *)data options:(SskyXMLParserOptions)options error:(NSError *)error;

/**
 NSString格式的XML按照指定的形式转换成JSON字符串
 @param string NSString格式的XML
 @param options 指定的形式
 @param error 错误码
 @return JSON字符串
 */
+ (NSString *)jsonStringForXMLString:(NSString *)string options:(SskyXMLParserOptions)options error:(NSError *)error;
@end
