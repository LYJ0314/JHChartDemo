//
//  JHTableDataRowModel.h
//  JHChartDemo
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface JHTableDataRowModel : NSObject

/**
 *  The maximum number of columns in the model.
 */
@property (nonatomic, assign) NSInteger maxCount;


/**
 *  Data Source Array
 */
@property (nonatomic, strong) NSArray * dataArr;



@end
