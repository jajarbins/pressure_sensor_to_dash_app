from django.db import models


class PressureV2(models.Model):

    millis = models.BigIntegerField()
    pressure = models.IntegerField()

    def __str__(self):
        return f"{self.millis} - {self.pressure}"


